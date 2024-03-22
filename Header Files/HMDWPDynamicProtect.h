//
//     Generated by private class-dump
//

@class NSDictionary, NSMutableArray, NSMutableSet;

@interface HMDWPDynamicProtect : NSObject {
    NSMutableSet *_swizzledMethodSet;
    NSDictionary *_protectedMethodDictionary;
    NSMutableArray *_waitFlags;
}

@property (retain, nonatomic) NSMutableArray *waitFlags;
@property (retain, nonatomic) NSMutableSet *swizzledMethodSet;
@property (copy) NSDictionary *protectedMethodDictionary;

+ (id)validatedMethodNameString:(id)arg0 error:(id *)arg1;
+ (id)sharedInstance;

- (void)protectMethodsOnMainThread:(id)arg0 onAnyThread:(id)arg1;
- (id)protectedMethodDictionary;
- (id)protectMethods:(id)arg0;
- (void)setProtectedMethodDictionary:(id)arg0;
- (id)swizzledMethodSet;
- (id)blockWithClass:(Class)arg0 selector:(SEL)arg1 isInstance:(BOOL)arg2 signature:(const char *)arg3 methodName:(id)arg4;
- (id)waitFlags;
- (void)setSwizzledMethodSet:(id)arg0;
- (void)setWaitFlags:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
