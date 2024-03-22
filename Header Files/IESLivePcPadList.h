//
//     Generated by private class-dump
//

@class NSString, NSArray, UICollectionView, IESLivePcPadLoadingCell, IESLivePcPadHelpView, IESLivePcPadHeader, IESLivePcPadDeviceCell;

@interface IESLivePcPadList : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    BOOL _startLoading;
    UICollectionView *_list;
    IESLivePcPadHeader *_header;
    NSArray *_pcData;
    NSArray *_padData;
    id /* block */ _selectedBlock;
    id /* block */ _reFreshBlock;
    IESLivePcPadDeviceCell *_selectedDeviceCell;
    IESLivePcPadLoadingCell *_loadingCell;
    IESLivePcPadHelpView *_padHelp;
    IESLivePcPadHelpView *_pcHelp;
    IESLivePcPadHelpView *_currentHelp;
    unsigned long long _theme;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _helpAnimOrigin;
}

@property (retain, nonatomic) UICollectionView *list;
@property (retain, nonatomic) IESLivePcPadHeader *header;
@property (nonatomic) BOOL startLoading;
@property (retain, nonatomic) NSArray *pcData;
@property (retain, nonatomic) NSArray *padData;
@property (copy, nonatomic) id /* block */ selectedBlock;
@property (copy, nonatomic) id /* block */ reFreshBlock;
@property (retain, nonatomic) IESLivePcPadDeviceCell *selectedDeviceCell;
@property (retain, nonatomic) IESLivePcPadLoadingCell *loadingCell;
@property (retain, nonatomic) IESLivePcPadHelpView *padHelp;
@property (retain, nonatomic) IESLivePcPadHelpView *pcHelp;
@property (retain, nonatomic) IESLivePcPadHelpView *currentHelp;
@property (nonatomic) unsigned long long theme;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } helpAnimOrigin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setSelectedBlock:(id /* block */)arg0;
- (id /* block */)selectedBlock;
- (void)setPcData:(id)arg0;
- (void)setPadData:(id)arg0;
- (id)loadingCell;
- (id)selectedDeviceCell;
- (id)pcData;
- (id)padData;
- (id)pcHelp;
- (id)padHelp;
- (void)setStartLoading:(BOOL)arg0;
- (void)setLoadingCell:(id)arg0;
- (id)createPcPadCombineCell:(id)arg0 forIndexPath:(id)arg1 data:(id)arg2;
- (void)showHelpWith:(id)arg0;
- (void)setSelectedDeviceCell:(id)arg0;
- (id /* block */)reFreshBlock;
- (id)currentHelp;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })helpFrameWith:(BOOL)arg0 top:(BOOL)arg1;
- (void)setPcHelp:(id)arg0;
- (void)setPadHelp:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })helpAnimOrigin;
- (void)setCurrentHelp:(id)arg0;
- (void)setHelpAnimOrigin:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 theme:(unsigned long long)arg1 selectedBlock:(id /* block */)arg2 refreshBlock:(id /* block */)arg3;
- (void)updateWithPcData:(id)arg0;
- (void)updateWithPadData:(id)arg0;
- (void)updateWithQRCodeImage:(id)arg0;
- (void)resetSelected;
- (void)checkDataWhenFetchFinish;
- (long long)currentPcCount;
- (long long)currentPadCount;
- (void)setReFreshBlock:(id /* block */)arg0;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void)setTheme:(unsigned long long)arg0;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (unsigned long long)theme;
- (BOOL)startLoading;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)list;
- (void)setList:(id)arg0;
- (id)header;
- (id)themeColor;
- (void)setHeader:(id)arg0;
- (void)setupUI;
- (id)totalData;

@end
