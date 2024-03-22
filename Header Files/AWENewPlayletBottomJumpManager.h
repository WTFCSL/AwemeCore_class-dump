//
//     Generated by private class-dump
//

@class NSString, AWEAwemeModel;

@interface AWENewPlayletBottomJumpManager : NSObject <AWEFeedBottomTipProtocol> {
    NSString *_referString;
    AWEAwemeModel *_model;
}

@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *referString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)referString;
- (void)setReferString:(id)arg0;
- (void)configureWithModel:(id)arg0 referString:(id)arg1;
- (void)jumpAction;
- (void)setModel:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)model;

@end