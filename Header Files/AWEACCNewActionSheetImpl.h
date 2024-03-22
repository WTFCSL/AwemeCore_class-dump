//
//     Generated by private class-dump
//

@class NSString, NSMutableArray, UIView;

@interface AWEACCNewActionSheetImpl : NSObject <AWESubtitleActionSheetDelegate, ACCNewActionSheetProtocol> {
    NSString *title;
    id /* block */ cancelHandler;
    UIView *_sheet;
    NSMutableArray *_itemTitles;
    NSMutableArray *_itemStyles;
    NSMutableArray *_itemHandlers;
}

@property (retain, nonatomic) UIView *sheet;
@property (retain, nonatomic) NSMutableArray *itemTitles;
@property (retain, nonatomic) NSMutableArray *itemStyles;
@property (retain, nonatomic) NSMutableArray *itemHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ cancelHandler;

- (void)actionSheetDidClickCancelButton:(id)arg0;
- (void)addActionWithTitle:(id)arg0 handler:(id /* block */)arg1;
- (id)titleForSubtitleActionSheet;
- (id)buttonTextsForSubtitleActionSheet;
- (id)buttonTypesForSubtitleActionSheet;
- (void)didClickedSubtitleActionSheetButtonAtIndex:(long long)arg0;
- (void)addActionWithTitle:(id)arg0 subtitle:(id)arg1 handler:(id /* block */)arg2;
- (void)addActionWithTitle:(id)arg0 subtitle:(id)arg1 highlighted:(BOOL)arg2 handler:(id /* block */)arg3;
- (id)itemHandlers;
- (id)itemStyles;
- (void)setItemStyles:(id)arg0;
- (void)setItemHandlers:(id)arg0;
- (id)init;
- (void)setCancelHandler:(id /* block */)arg0;
- (void)dismiss;
- (void).cxx_destruct;
- (void)show;
- (id)title;
- (void)setTitle:(id)arg0;
- (id /* block */)cancelHandler;
- (void)setItemTitles:(id)arg0;
- (id)itemTitles;
- (id)sheet;
- (void)setSheet:(id)arg0;

@end