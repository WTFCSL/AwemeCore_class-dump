//
//     Generated by private class-dump
//

@class NSString;

@interface WXSceneInternalMessage : NSObject {
    NSString *_stateId;
    NSString *_stateToken;
    NSString *_stateUrl;
    NSString *_stateTitle;
    unsigned long long _jumpType;
}

@property (retain, nonatomic) NSString *stateId;
@property (retain, nonatomic) NSString *stateToken;
@property (retain, nonatomic) NSString *stateUrl;
@property (retain, nonatomic) NSString *stateTitle;
@property (nonatomic) unsigned long long jumpType;

- (unsigned long long)jumpType;
- (id)stateUrl;
- (void)setStateUrl:(id)arg0;
- (void)setJumpType:(unsigned long long)arg0;
- (void)setStateId:(id)arg0;
- (id)stateTitle;
- (void)setStateTitle:(id)arg0;
- (void).cxx_destruct;
- (void)setStateToken:(id)arg0;
- (id)stateToken;
- (id)stateId;

@end