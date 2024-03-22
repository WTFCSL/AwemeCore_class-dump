//
//     Generated by private class-dump
//

@protocol ILALoggerProtocol;

@interface ILALogModel : NSObject {
    struct shared_ptr<ILASDK::LoggerDelegate> { struct LoggerDelegate *__ptr_; struct __shared_weak_count *__cntrl_; } loggerImpl;
    struct shared_ptr<ILASDK::TeaDelegate> { struct TeaDelegate *__ptr_; struct __shared_weak_count *__cntrl_; } teaImpl;
    struct shared_ptr<ILASDK::MonitorDelegate> { struct MonitorDelegate *__ptr_; struct __shared_weak_count *__cntrl_; } monitorImpl;
    id<ILALoggerProtocol> _loggerProtocol;
}

@property (weak, nonatomic) id<ILALoggerProtocol> loggerProtocol;

- (void)event:(id)arg0 params:(id)arg1;
- (id)loggerProtocol;
- (void)log:(id)arg0 level:(unsigned long long)arg1;
- (id)initWithLoggerProtocol:(id)arg0;
- (struct shared_ptr<ILASDK::LoggerDelegate> { struct LoggerDelegate *x0; struct __shared_weak_count *x1; })logImpl;
- (struct shared_ptr<ILASDK::TeaDelegate> { struct TeaDelegate *x0; struct __shared_weak_count *x1; })teaImpl;
- (struct shared_ptr<ILASDK::MonitorDelegate> { struct MonitorDelegate *x0; struct __shared_weak_count *x1; })monitorImpl;
- (void)setLoggerProtocol:(id)arg0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end