//
//     Generated by private class-dump
//

@class NSString;

@interface TSPKDetectTrigger : NSObject {
    NSString *_interestAPIType;
    id /* block */ _detectAction;
}

@property (copy, nonatomic) NSString *interestAPIType;
@property (copy, nonatomic) id /* block */ detectAction;

- (void)updateWithParams:(id)arg0;
- (BOOL)canHandelEvent:(id)arg0;
- (id /* block */)detectAction;
- (void)decodeParams:(id)arg0;
- (void)setInterestAPIType:(id)arg0;
- (void)setDetectAction:(id /* block */)arg0;
- (id)interestAPIType;
- (id)initWithParams:(id)arg0 apiType:(id)arg1;
- (void).cxx_destruct;
- (void)setup;

@end
