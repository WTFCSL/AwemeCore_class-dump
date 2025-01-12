//
//     Generated by private class-dump
//

@class NSString;

@interface AWEStickerPickerDefaultCategoryUIConfiguration : NSObject <AWEStickerPickerCategoryUIConfigurationProtocol> {
    BOOL _inIMRecordPage;
    id /* block */ _layoutHandler;
}

@property (copy, nonatomic) id /* block */ layoutHandler;
@property (nonatomic) BOOL inIMRecordPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)clearButtonSeparatorColor;
- (id)categoryTabListBackgroundColor;
- (id)categoryTabListBottomBorderColor;
- (double)categoryTabListViewHeight;
- (id)clearEffectButtonImage;
- (Class)categoryItemCellClass;
- (struct CGSize { double x0; double x1; })stickerPickerCategoryTabView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void)setLayoutHandler:(id /* block */)arg0;
- (void)setInIMRecordPage:(BOOL)arg0;
- (id /* block */)layoutHandler;
- (BOOL)inIMRecordPage;
- (void).cxx_destruct;

@end
