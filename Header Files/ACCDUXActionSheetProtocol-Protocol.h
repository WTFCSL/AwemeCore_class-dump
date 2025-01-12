//
//     Generated by private class-dump
//

@class NSArray, NSString;
@protocol ACCDUXActionSheetDelegate;

@protocol ACCDUXActionSheetProtocol <NSObject>

@property (weak, nonatomic) id<ACCDUXActionSheetDelegate> delegate;
@property (copy, nonatomic) NSArray *itemTexts;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ actionHandler;

- (id)itemTexts;
- (void)setItemTexts:(id)arg0;
- (id /* block */)actionHandler;
- (void)setActionHandler:(id /* block */)arg0;
- (void)show;
- (id)title;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setTitle:(id)arg0;
- (void)showInView:(id)arg0;

@end
