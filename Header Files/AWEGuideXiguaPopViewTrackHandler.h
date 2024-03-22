//
//     Generated by private class-dump
//

@class NSString, AWEAwemeModel;

@interface AWEGuideXiguaPopViewTrackHandler : NSObject <AWEGuideVideoPopViewTrackHandlerProtocol> {
    AWEAwemeModel *_awemeModel;
    NSString *_referString;
    NSString *_fromModuleName;
}

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *fromModuleName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)awemeModel;
- (id)referString;
- (void)setAwemeModel:(id)arg0;
- (void)setReferString:(id)arg0;
- (id)paramsForShowWithModel:(id)arg0 popView:(id)arg1;
- (void)trackForWindowDidShowWithPopView:(id)arg0;
- (void)trackForOpenClickWithPopView:(id)arg0 storage:(BOOL)arg1;
- (void)trackForCancelClickWithPopView:(id)arg0 storage:(BOOL)arg1;
- (void)trackForCloseWindowWithPopView:(id)arg0 closeType:(long long)arg1;
- (id)fromModuleName;
- (void)setFromModuleName:(id)arg0;
- (id)initWithAwemeModel:(id)arg0 referString:(id)arg1 fromModuleName:(id)arg2;
- (void).cxx_destruct;

@end