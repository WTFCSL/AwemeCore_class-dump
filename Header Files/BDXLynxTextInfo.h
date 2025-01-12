//
//     Generated by private class-dump
//

@class NSDictionary;

@interface BDXLynxTextInfo : NSObject {
    BOOL _ignoreFocus;
    BOOL _enableTouchPseudoPropagation;
    int _eventThrough;
    long long _sign;
    long long _parentSign;
    NSDictionary *_eventSet;
}

@property (nonatomic) long long sign;
@property (nonatomic) long long parentSign;
@property (readonly, nonatomic) BOOL ignoreFocus;
@property (readonly, nonatomic) BOOL enableTouchPseudoPropagation;
@property (readonly, nonatomic) int eventThrough;
@property (readonly, nonatomic) NSDictionary *eventSet;

- (id)eventSet;
- (long long)sign;
- (void)setSign:(long long)arg0;
- (BOOL)ignoreFocus;
- (int)eventThrough;
- (BOOL)enableTouchPseudoPropagation;
- (id)initWithShadowNode:(id)arg0;
- (long long)parentSign;
- (void)setParentSign:(long long)arg0;
- (void).cxx_destruct;

@end
