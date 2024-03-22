//
//     Generated by private class-dump
//

@class NSString, IESLiveRoomFilter, NSMutableArray;
@protocol IESLiveFilterViewModelDelegate;

@interface IESLiveFilterViewModel : NSObject <IESLiveFilterManagerObserver, IESLiveScrollFilterPickerViewDelegate> {
    long long _selectedLiveFilterIndex;
    id<IESLiveFilterViewModelDelegate> _reaction;
    IESLiveRoomFilter *_selectedFilter;
    long long _sliderIntensity;
    long long _scene;
    NSMutableArray *_allFilterList;
    NSMutableArray *_switchingFilterList;
}

@property (nonatomic) long long scene;
@property (retain, nonatomic) IESLiveRoomFilter *selectedFilter;
@property (nonatomic) long long selectedLiveFilterIndex;
@property (nonatomic) long long sliderIntensity;
@property (retain, nonatomic) NSMutableArray *allFilterList;
@property (retain, nonatomic) NSMutableArray *switchingFilterList;
@property (weak, nonatomic) id<IESLiveFilterViewModelDelegate> reaction;
@property (readonly, nonatomic) BOOL isOriginFilterIntensity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applyFilter:(id)arg0;
- (void)setSelectedFilter:(id)arg0;
- (id)selectedFilter;
- (long long)selectedLiveFilterIndex;
- (void)processFilter:(id)arg0 oldLogicNeedSlider:(BOOL)arg1;
- (void)updateFilter:(id)arg0 intensity:(double)arg1;
- (void)setSelectedLiveFilterIndex:(long long)arg0;
- (void)resetSelectedFilter;
- (void)scrollFilterPickerView:(id)arg0 didUpdateSliderValue:(long long)arg1;
- (void)scrollFilterPickerView:(id)arg0 leftFilter:(id)arg1 rightFilter:(id)arg2 switchDirction:(long long)arg3 progress:(double)arg4;
- (void)scrollFilterPickerView:(id)arg0 didSelectFilter:(id)arg1 isSwiping:(BOOL)arg2;
- (void)scrollFilterPickViewDidEndScroll;
- (void)liveFilterListChanged:(id)arg0;
- (void)applyInitialFilter;
- (BOOL)isOriginFilterIntensity;
- (void)setupScene:(long long)arg0;
- (void)switchLeftFilter:(id)arg0 rightFilter:(id)arg1 switchDirction:(long long)arg2 progress:(double)arg3;
- (id)switchingFilterList;
- (void)removeSingleFilter:(id)arg0;
- (void)removeAllFilter;
- (void)applyFilterNode:(id)arg0 intensity:(double)arg1;
- (void)addNewSwitchingFilter:(id)arg0;
- (id)allFilterList;
- (long long)getIndexFromKVStore;
- (long long)sliderIntensity;
- (void)setSliderIntensity:(long long)arg0;
- (void)setAllFilterList:(id)arg0;
- (void)setSwitchingFilterList:(id)arg0;
- (id)initWithScene:(long long)arg0;
- (void)setScene:(long long)arg0;
- (void).cxx_destruct;
- (long long)scene;
- (id)reaction;
- (void)setReaction:(id)arg0;

@end