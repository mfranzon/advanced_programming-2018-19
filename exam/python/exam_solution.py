__author__="Marco Franzon"
__date__="26-05-21"

import datetime

class PostcardList:
    ########################
    def __init__(self):

        self._file = ""
        self._postcards = list()
        self._date = dict()
        self._from = dict()
        self._to = dict()


    def readFile(self, filename):
        """
        Function which reads from filename and stores its lines
        as a list in self._postcards. Call self._parsePostcards() to parse the lines.

        :param filename: file name

        """
        self._file = filename

        self._postcards = list()
        self._date = dict()
        self._from = dict()
        self._to = dict()

        with open(self._file, "r") as file:
            for line in file:
                self._postcards.append(line)
        self.parsePostcards()


    def writeFile(self, filename):
        """

        Function that write postcards stored in self._postcards list into filename,
        one for line.


        :param filename: file to write to

        """

        with open(filename, 'w') as file:
            for line in self._postcards:
                file.write(line)


    def updateFile(self):
        """
        Function that update postcards of the file in use by calling writeFile
        with self._file as argument
        """

        self.writeFile(self._file)



    def updateLists(self, filename):
        """
        Function that appends new contents
        when self.parsePostcards() is called.


        :param filename: file to read from
        """

        self._file = filename
        with open(self._file, 'r') as file:
            for line in file:
                self._postcards.append(line)
        self.parsePostcards()


    def parsePostcards(self):
        """
        Function is called by readFile and updateLists in order to parse the lines stored in self.postcards
        and append only postcards information (date, from, to) to their respectively dictionaries.

        """
        for i in range(len(self._postcards)):

             date, fr, to = self._postcards[i].split(" ")
             date = date[5:15]
             fr = fr[5:-1]
             to = to[3:-2]
             date = datetime.datetime.strptime(date, '%Y-%m-%d')


             if date not in self._date:
                 self._date[date] = list()
             self._date[date].append(i)

             if fr not in self._from:
                 self._from[fr] = list()
             self._from[fr].append(i)

             if to not in self._to:
                 self._to[to] = list()
             self._to[to].append(i)


    def getNumberOfPostcards(self):
        """
        Function that gives length of file

        :return the length of file [int]
        """
        return len(self._postcards)


    def getPostcardsByDateRange(self, date_range):
        """
        Function that parse the date list to retrieve the dates that belongs in the date_range of interest,
        the matches are retrieved from self._postcards and appended to date_postcards, that is returned to the user.

        :param date_range: range of dates used to find postcards of interest
        :return:  [list] of postcards found that match query

        """
        date_postcards = list()

        for date in self._date:
            if date_range[0] <= date <= date_range[1]:
                for d in self._date[date]:
                    date_postcards.append(self._postcards[d])
        return date_postcards


    def getPostcardsBySender(self, sender):
        """
        Function that parse the sender list to retrieve the sender of interest,
        the matches are retrieved from self._postcards and appended to sender_postcards, that is returned to the user.

        :param sender: sender used to find postcards of interest
        :return: [list] of postcards found that match query
        """
        sender_postcards = list()

        if sender in self._from:
            for s in self._from[sender]:
                sender_postcards.append(self._postcards[s])
        return sender_postcards


    def getPostcardsByReceiver(self, receiver):
        """
        Function that parse the receiver list to retrieve the receiver of interest,
        the matches are retrieved from self._postcards and appended to receiver_postcards, that is returned to the user.

        :param receiver: receiver used to find postcards of interest
        :return: [list of postcards] found that match query
        """
        receiver_postcards = list()

        if receiver in self._to:
            for r in self._to[receiver]:
                receiver_postcards.append(self._postcards[r])
        return receiver_postcards

    ########################
