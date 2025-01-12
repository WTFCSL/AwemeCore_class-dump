//
//     Generated by private class-dump
//

@class AWEAwemeModel, NSMutableArray, DUXBasicSheet;

@interface AWEShareOutsideSheetPanel : NSObject {
    AWEAwemeModel *_currentModel;
    NSMutableArray *_items;
    DUXBasicSheet *_sheet;
}

@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) DUXBasicSheet *sheet;
@property (retain, nonatomic) AWEAwemeModel *currentModel;

+ (id)shareInstance;

- (void)dismissWithAnimation:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)showWithShareItems:(id)arg0 withModel:(id)arg1;
- (void)setItems:(id)arg0;
- (void).cxx_destruct;
- (id)items;
- (void)setCurrentModel:(id)arg0;
- (id)currentModel;
- (id)sheet;
- (void)setSheet:(id)arg0;

@end
