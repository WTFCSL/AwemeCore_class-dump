//
//     Generated by private class-dump
//

@class NSArray, BDPCustomMorePanelModel, NSDictionary, BDPPrivacyAccessInfo, BDPUniqueID;

@protocol BDPMorePanelInterface <NSObject>

@property (copy, nonatomic) NSArray *items;
@property (retain, nonatomic) BDPPrivacyAccessInfo *privacyInfo;
@property (copy, nonatomic) BDPUniqueID *uniqueID;
@property (copy, nonatomic) NSArray *firstRowItems;
@property (copy, nonatomic) NSArray *secondRowItems;
@property (retain, nonatomic) BDPCustomMorePanelModel *customModel;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (readonly, nonatomic) BOOL autoDismiss;

- (void)setExtraInfo:(id)arg0;
- (void)setPrivacyInfo:(id)arg0;
- (void)showInView:(id)arg0 animated:(BOOL)arg1 complete:(id /* block */)arg2;
- (id)privacyInfo;
- (void)dismissAnimated:(BOOL)arg0 complete:(id /* block */)arg1;
- (id)firstRowItems;
- (id)secondRowItems;
- (void)setFirstRowItems:(id)arg0;
- (void)setSecondRowItems:(id)arg0;
- (void)setItems:(id)arg0;
- (id)uniqueID;
- (id)items;
- (void)setUniqueID:(id)arg0;
- (BOOL)autoDismiss;
- (id)customModel;
- (void)setCustomModel:(id)arg0;
- (id)initWithUniqueID:(id)arg0;
- (id)extraInfo;

@end
