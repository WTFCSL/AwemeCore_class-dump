//
//     Generated by private class-dump
//

@class DVETransitionItemModel, NSString, NSIndexPath, DVETransitionPanelModel;
@protocol DVEResourceCategoryModelProtocol, DVETransitionPanelContextProtocol, DVETransitionPanelTrackDelegate, DVEResourceModelProtocol;

@interface DVETransitionPanelViewModel : NSObject {
    int _trackEffectCount;
    int _trackTabCount;
    long long _selectedTabIndex;
    unsigned long long _downloadSuccessSelectStatus;
    DVETransitionPanelModel *_model;
    NSIndexPath *_selectedItemIndexPath;
    id<DVEResourceModelProtocol> _noneItemModel;
    DVETransitionItemModel *_selectedItemModel;
    id<DVETransitionPanelTrackDelegate> _trackDelegate;
    id<DVETransitionPanelContextProtocol> _context;
}

@property (nonatomic) int trackEffectCount;
@property (nonatomic) int trackTabCount;
@property (retain, nonatomic) DVETransitionItemModel *selectedItemModel;
@property (weak, nonatomic) id<DVETransitionPanelContextProtocol> context;
@property (nonatomic) long long selectedTabIndex;
@property (nonatomic) unsigned long long downloadSuccessSelectStatus;
@property (readonly, nonatomic) long long selectedItemIndex;
@property (retain, nonatomic) DVETransitionPanelModel *model;
@property (retain, nonatomic) NSIndexPath *selectedItemIndexPath;
@property (retain, nonatomic) id<DVEResourceModelProtocol> noneItemModel;
@property (readonly, nonatomic) NSString *selectedItemIdentifer;
@property (readonly, nonatomic) NSString *selectedTabName;
@property (readonly, nonatomic) id<DVEResourceCategoryModelProtocol> selectedTabModel;
@property (weak, nonatomic) id<DVETransitionPanelTrackDelegate> trackDelegate;

+ (id)dve_viewModelWithContext:(id)arg0;

- (id)trackDelegate;
- (void)setTrackDelegate:(id)arg0;
- (id)selectedItemModel;
- (id)selectedItemIdentifer;
- (void)setSelectedItemIndexPath:(id)arg0;
- (id)selectedTabModel;
- (id)noneItemModel;
- (id)selectedItemIndexPath;
- (void)setNoneItemModel:(id)arg0;
- (int)trackEffectCount;
- (void)setTrackEffectCount:(int)arg0;
- (void)setSelectedItemModel:(id)arg0;
- (int)trackTabCount;
- (void)setTrackTabCount:(int)arg0;
- (id)selectedTabName;
- (unsigned long long)downloadSuccessSelectStatus;
- (void)setDownloadSuccessSelectStatus:(unsigned long long)arg0;
- (void)setModel:(id)arg0;
- (id)initWithContext:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)model;
- (id)context;
- (long long)selectedItemIndex;
- (long long)selectedTabIndex;
- (void)setSelectedTabIndex:(long long)arg0;

@end