//
//     Generated by private class-dump
//

@class NSString;

@interface AWEHPTopTabEditPanelConfigModel : MTLModel <MTLJSONSerializing> {
    NSString *_orderChangeSuccessToastContent;
    NSString *_oneSortButtonToastContent;
    NSString *_oneSortButtonTitle;
    NSString *_unmovableToastContent;
    NSString *_confirmButtonContent;
    NSString *_editPanelTitle;
}

@property (copy, nonatomic) NSString *orderChangeSuccessToastContent;
@property (copy, nonatomic) NSString *oneSortButtonToastContent;
@property (copy, nonatomic) NSString *oneSortButtonTitle;
@property (copy, nonatomic) NSString *unmovableToastContent;
@property (copy, nonatomic) NSString *confirmButtonContent;
@property (copy, nonatomic) NSString *editPanelTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)orderChangeSuccessToastContent;
- (id)editPanelTitle;
- (id)unmovableToastContent;
- (id)oneSortButtonTitle;
- (id)oneSortButtonToastContent;
- (void)setOrderChangeSuccessToastContent:(id)arg0;
- (void)setOneSortButtonToastContent:(id)arg0;
- (void)setOneSortButtonTitle:(id)arg0;
- (void)setUnmovableToastContent:(id)arg0;
- (id)confirmButtonContent;
- (void)setConfirmButtonContent:(id)arg0;
- (void)setEditPanelTitle:(id)arg0;
- (void).cxx_destruct;

@end
