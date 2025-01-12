//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AFDPrivacyActionSheetConfig : NSObject {
    BOOL _useNewStyle;
    BOOL _shouldShowArrowIcon;
    NSArray *_selectItems;
    NSString *_headerText;
    id /* block */ _dismissBlock;
}

@property (nonatomic) BOOL useNewStyle;
@property (copy, nonatomic) NSArray *selectItems;
@property (copy, nonatomic) NSString *headerText;
@property (nonatomic) BOOL shouldShowArrowIcon;
@property (copy, nonatomic) id /* block */ dismissBlock;

- (BOOL)useNewStyle;
- (void)setUseNewStyle:(BOOL)arg0;
- (id)selectItems;
- (void)setSelectItems:(id)arg0;
- (BOOL)shouldShowArrowIcon;
- (void)setShouldShowArrowIcon:(BOOL)arg0;
- (id)headerText;
- (void).cxx_destruct;
- (void)setHeaderText:(id)arg0;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg0;

@end
