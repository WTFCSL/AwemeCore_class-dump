//
//     Generated by private class-dump
//

@class NSString;

@interface TEIOSAppStatusNotifierHelper : NSObject <VEAppStatusProtocol> {
    struct function<void (TEAppStatus)> { struct __value_func<void (TEAppStatus)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _changeBlock;
}

@property (nonatomic) struct function<void (TEAppStatus)> { struct __value_func<void (TEAppStatus)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } changeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setStatusListener:(struct function<void (TEAppStatus)> { struct __value_func<void (TEAppStatus)> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; })arg0;
- (void)becomeActive;
- (void).cxx_destruct;
- (void)resignActive;
- (void)enterBackground;
- (void)enterForeground;
- (void)registerNotifications;
- (void)dealloc;
- (id).cxx_construct;
- (void)memoryWarning;
- (struct function<void (TEAppStatus)> { struct __value_func<void (TEAppStatus)> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; })changeBlock;
- (void)setChangeBlock:(struct function<void (TEAppStatus)> { struct __value_func<void (TEAppStatus)> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; })arg0;

@end