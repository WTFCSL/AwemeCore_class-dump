//
//     Generated by private class-dump
//

@class NSString, IGListAdapter, AWEPadBaseListSectionController, NSHashTable;

@interface AWEPadListCellDisplayTracker : NSObject <IGListAdapterUpdateListener> {
    BOOL _lastDisplayBanner;
    BOOL _needTrack;
    BOOL _needClear;
    IGListAdapter *_listAdpter;
    NSHashTable *_displayingCells;
    NSHashTable *_displayingCellDiffIdentifiers;
    NSHashTable *_displayedCellDiffIdentifiers;
    AWEPadBaseListSectionController *_triptychBannerSectionController;
    double _bannerHeight;
    struct __CFRunLoopObserver { } *_runLoopObserver;
}

@property (weak, nonatomic) IGListAdapter *listAdpter;
@property (retain, nonatomic) NSHashTable *displayingCells;
@property (retain, nonatomic) NSHashTable *displayingCellDiffIdentifiers;
@property (retain, nonatomic) NSHashTable *displayedCellDiffIdentifiers;
@property (nonatomic) BOOL lastDisplayBanner;
@property (weak, nonatomic) AWEPadBaseListSectionController *triptychBannerSectionController;
@property (nonatomic) double bannerHeight;
@property (nonatomic) BOOL needTrack;
@property (nonatomic) BOOL needClear;
@property (nonatomic) struct __CFRunLoopObserver { } *runLoopObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)needClear;
- (void)setNeedClear:(BOOL)arg0;
- (id)initWithListAdapter:(id)arg0;
- (void)setNeedTrack;
- (void)allEndDisplay;
- (void)addRunLoopObserver;
- (void)trackDisplayIfNeed;
- (id)listAdpter;
- (id)displayingCells;
- (id)displayingCellDiffIdentifiers;
- (id)displayedCellDiffIdentifiers;
- (void)setTriptychBannerSectionController:(id)arg0;
- (id)triptychBannerSectionController;
- (void)setDisplayingCells:(id)arg0;
- (void)setDisplayingCellDiffIdentifiers:(id)arg0;
- (void)setLastDisplayBanner:(BOOL)arg0;
- (BOOL)lastDisplayBanner;
- (void)listAdapter:(id)arg0 didFinishUpdate:(long long)arg1 animated:(BOOL)arg2;
- (void)setNeedClear;
- (void)trackBannerDisplayWithOffset:(double)arg0 fromReload:(BOOL)arg1;
- (void)setListAdpter:(id)arg0;
- (void)setDisplayedCellDiffIdentifiers:(id)arg0;
- (BOOL)needTrack;
- (void)setNeedTrack:(BOOL)arg0;
- (void).cxx_destruct;
- (struct __CFRunLoopObserver { } *)runLoopObserver;
- (void)dealloc;
- (double)bannerHeight;
- (void)setBannerHeight:(double)arg0;
- (void)setRunLoopObserver:(struct __CFRunLoopObserver { } *)arg0;

@end
