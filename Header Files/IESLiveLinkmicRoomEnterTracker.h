//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface IESLiveLinkmicRoomEnterTracker : NSObject <IESLiveLinkmicRoomEnterTrackerService> {
    BOOL _roomTracked;
    BOOL _midLoaded;
    BOOL _bgLoaded;
    BOOL _listLoaded;
    BOOL _ktvMVLoaded;
    BOOL _isPreview;
    BOOL _isFromSlide;
    BOOL _isFromPreload;
    NSNumber *_roomID;
    double _startTime;
    double _midTime;
    double _endTime;
    long long _seatDuration;
    long long _bgDuration;
}

@property (retain, nonatomic) NSNumber *roomID;
@property (nonatomic) BOOL roomTracked;
@property (nonatomic) BOOL midLoaded;
@property (nonatomic) BOOL bgLoaded;
@property (nonatomic) BOOL listLoaded;
@property (nonatomic) BOOL ktvMVLoaded;
@property (nonatomic) BOOL isPreview;
@property (nonatomic) BOOL isFromSlide;
@property (nonatomic) BOOL isFromPreload;
@property (nonatomic) double startTime;
@property (nonatomic) double midTime;
@property (nonatomic) double endTime;
@property (nonatomic) long long seatDuration;
@property (nonatomic) long long bgDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)scrollBegin:(id)arg0 isPreview:(BOOL)arg1;
- (void)roomLoadBegin:(id)arg0;
- (void)clickBegin:(id)arg0;
- (BOOL)isFromPreload;
- (void)setIsFromPreload:(BOOL)arg0;
- (void)backgroudLoadEnd:(id)arg0;
- (BOOL)isNotSameRoom:(id)arg0;
- (void)guestListLoadEnd:(id)arg0;
- (void)ktvMVLoadEnd:(id)arg0;
- (void)updateFromPreload;
- (void)setIsFromSlide:(BOOL)arg0;
- (void)setRoomTracked:(BOOL)arg0;
- (void)setKtvMVLoaded:(BOOL)arg0;
- (void)trackUserLeave:(long long)arg0;
- (void)trackUserLeaveForTea:(long long)arg0;
- (BOOL)midLoaded;
- (void)setMidLoaded:(BOOL)arg0;
- (void)setMidTime:(double)arg0;
- (void)trackTimeIfNeed;
- (BOOL)bgLoaded;
- (void)setBgLoaded:(BOOL)arg0;
- (void)trackBGForTea:(id)arg0 duration:(long long)arg1;
- (BOOL)listLoaded;
- (void)setListLoaded:(BOOL)arg0;
- (void)setSeatDuration:(long long)arg0;
- (long long)seatDuration;
- (BOOL)ktvMVLoaded;
- (BOOL)isFromSlide;
- (BOOL)roomTracked;
- (double)midTime;
- (void)trackForTea:(long long)arg0;
- (id)init;
- (BOOL)isRecording;
- (void)setStartTime:(double)arg0;
- (void).cxx_destruct;
- (double)endTime;
- (BOOL)isPreview;
- (double)startTime;
- (void)setEndTime:(double)arg0;
- (id)roomID;
- (void)setRoomID:(id)arg0;
- (void)setIsPreview:(BOOL)arg0;
- (void)setBgDuration:(long long)arg0;
- (long long)bgDuration;
- (void)clean;

@end
