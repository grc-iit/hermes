#ifndef LABSTOR_BDEV_METHODS_H_
#define LABSTOR_BDEV_METHODS_H_

/** The set of methods in the admin task */
struct Method : public TaskMethod {
  TASK_METHOD_T kWrite = kLast + 0;
  TASK_METHOD_T kRead = kLast + 1;
  TASK_METHOD_T kAllocate = kLast + 2;
  TASK_METHOD_T kFree = kLast + 3;
  TASK_METHOD_T kMonitor = kLast + 4;
  TASK_METHOD_T kUpdateCapacity = kLast + 5;
};

#endif  // LABSTOR_BDEV_METHODS_H_