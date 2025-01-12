//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface IESLiveInteractionLinkerApplyParams : IESLiveInteractionLinkerParams {
    NSNumber *_mode;
    NSNumber *_position;
    NSNumber *_muteState;
    unsigned long long _applySource;
    NSString *_requestPage;
    NSString *_applyReason;
}

@property (retain, nonatomic) NSNumber *mode;
@property (retain, nonatomic) NSNumber *position;
@property (retain, nonatomic) NSNumber *muteState;
@property (nonatomic) unsigned long long applySource;
@property (copy, nonatomic) NSString *requestPage;
@property (copy, nonatomic) NSString *applyReason;

- (id)requestPage;
- (void)setRequestPage:(id)arg0;
- (id)applyReason;
- (void)setApplyReason:(id)arg0;
- (unsigned long long)applySource;
- (void)setApplySource:(unsigned long long)arg0;
- (void)setMuteState:(id)arg0;
- (id)muteState;
- (void).cxx_destruct;
- (id)mode;
- (id)position;
- (void)setPosition:(id)arg0;
- (void)setMode:(id)arg0;

@end
