//
//     Generated by private class-dump
//

@class BDPScreenContentProtector;

@interface BDPContentPlayer : NSObject {
    BDPScreenContentProtector *_protector;
}

@property (retain, nonatomic) BDPScreenContentProtector *protector;

- (void)enableUserScreenRecord;
- (void)disableUserScreenRecord;
- (id)protector;
- (void)setProtector:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setContentView:(id)arg0;

@end