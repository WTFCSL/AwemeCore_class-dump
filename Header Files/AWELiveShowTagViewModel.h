//
//     Generated by private class-dump
//

@class AWELiveVSEpisode, NSString, AWELiveShowTagView, AWELiveRoomModel;

@interface AWELiveShowTagViewModel : NSObject <AWELiveShowTagViewProtocol> {
    AWELiveVSEpisode *_episode;
    AWELiveRoomModel *_room;
    AWELiveShowTagView *_tagView;
    long long _singleType;
}

@property (retain, nonatomic) AWELiveVSEpisode *episode;
@property (retain, nonatomic) AWELiveRoomModel *room;
@property (retain, nonatomic) AWELiveShowTagView *tagView;
@property (nonatomic) long long singleType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createWithRoom:(id)arg0 sizeOfView:(long long)arg1;
- (id)createWithEpisode:(id)arg0 sizeOfView:(long long)arg1;
- (id)createWithSingleType:(long long)arg0 sizeOfView:(long long)arg1;
- (void)updatePaidTagType:(long long)arg0;
- (double)currentPaidTagWidth;
- (void)updateCountDownLabel:(double)arg0;
- (void)removeAllSubViews;
- (void)chooseType;
- (long long)singleType;
- (void)singleTypeTransform;
- (void)setSingleType:(long long)arg0;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:(id)arg0;
- (void)setEpisode:(id)arg0;
- (id)episode;
- (id)tagView;
- (void)setTagView:(id)arg0;

@end
