//
//     Generated by private class-dump
//

@class ACCRecordAuthStatus;

@interface ACCLynxRecorderAuthComponent : ACCRecordAuthComponent {
    ACCRecordAuthStatus *_lynxAuthStatus;
}

@property (retain, nonatomic) ACCRecordAuthStatus *lynxAuthStatus;

- (void)componentDidMount;
- (void)componentDidAppear;
- (unsigned long long)preferredLoadPhase;
- (id)lynxAuthStatus;
- (void)setLynxAuthStatus:(id)arg0;
- (void).cxx_destruct;

@end