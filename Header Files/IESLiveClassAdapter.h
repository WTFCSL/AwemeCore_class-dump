//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveClassAdapter : NSProxy {
    id _realObject;
    NSString *_realClassName;
}

@property (copy, nonatomic) NSString *realClassName;
@property (retain, nonatomic) id realObject;

+ (void)forwardInvocation:(id)arg0;
+ (id)methodSignatureForSelector:(SEL)arg0;

- (void)setRealClassName:(id)arg0;
- (id)realObject;
- (void)private_setup;
- (id)realClassName;
- (void)setRealObject:(id)arg0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg0;
- (id)methodSignatureForSelector:(SEL)arg0;

@end
