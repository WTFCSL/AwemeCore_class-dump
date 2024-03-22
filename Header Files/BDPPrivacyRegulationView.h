//
//     Generated by private class-dump
//

@class NSString, BDPUniqueID, NSDictionary;
@protocol BDPPrivacyRegulationViewDelegate;

@interface BDPPrivacyRegulationView : UIView <BDPPrivacyRegulationContentViewDelegate> {
    BOOL _shouldUseUnionPrivacy;
    id /* block */ _animationBlock;
    id<BDPPrivacyRegulationViewDelegate> _delegate;
    BDPUniqueID *_uniqueID;
    NSDictionary *_unionPrivacyParams;
    NSString *_content;
}

@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) id /* block */ animationBlock;
@property (weak, nonatomic) id<BDPPrivacyRegulationViewDelegate> delegate;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) BOOL shouldUseUnionPrivacy;
@property (retain, nonatomic) NSDictionary *unionPrivacyParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onClickReport:(id)arg0;
- (void)onClickPrivacyProtocol:(id)arg0;
- (void)p_setupUI;
- (void)onClickButton:(id)arg0;
- (BOOL)shouldUseUnionPrivacy;
- (void)setShouldUseUnionPrivacy:(BOOL)arg0;
- (id)initWithUniqueID:(id)arg0 content:(id)arg1 shouldUseUnionPrivacy:(BOOL)arg2;
- (id)unionPrivacyParams;
- (void)setUnionPrivacyParams:(id)arg0;
- (void).cxx_destruct;
- (id)uniqueID;
- (id /* block */)animationBlock;
- (void)setAnimationBlock:(id /* block */)arg0;
- (void)setUniqueID:(id)arg0;
- (id)content;
- (id)delegate;
- (void)setContent:(id)arg0;
- (void)setDelegate:(id)arg0;
- (id)initWithContent:(id)arg0;

@end