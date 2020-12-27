#ifndef PROCESSOR_H
#define PROCESSOR_H

class Processor {
 public:
  float Utilization();  // TODO: See src/processor.cpp
  float UsagePercentage();

  // TODO: Declare any necessary private members
 private:
    const std::string kProcDirectory{"/proc/"};
    const std::string kStatFilename{"/stat"};

};

#endif