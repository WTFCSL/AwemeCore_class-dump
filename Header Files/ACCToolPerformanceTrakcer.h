//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSArray;

@interface ACCToolPerformanceTrakcer : NSObject {
    BOOL _finished;
    BOOL _pending;
    BOOL _loseStartPointMark;
    NSArray *_waitingKeyArray;
    NSString *_primaryKey;
    id /* block */ _additionHandleBlock;
    NSMutableDictionary *_eventBeginDictionary;
    NSMutableDictionary *_eventEndDictionary;
    NSString *_trackName;
}

@property (retain, nonatomic) NSMutableDictionary *eventBeginDictionary;
@property (retain, nonatomic) NSMutableDictionary *eventEndDictionary;
@property (nonatomic) BOOL pending;
@property (copy, nonatomic) NSString *trackName;
@property (nonatomic) BOOL finished;
@property (nonatomic) BOOL loseStartPointMark;
@property (copy, nonatomic) NSArray *waitingKeyArray;
@property (copy, nonatomic) NSString *primaryKey;
@property (copy, nonatomic) id /* block */ additionHandleBlock;

- (void)startTrack;
- (id)eventBeginDictionary;
- (id)eventEndDictionary;
- (void)eventBegin:(id)arg0;
- (void)eventEnd:(id)arg0;
- (void)setEventBeginDictionary:(id)arg0;
- (void)setEventEndDictionary:(id)arg0;
- (unsigned long long)getBeginForKey:(id)arg0;
- (void)checkPrimaryKey;
- (void)eventEnd:(id)arg0 trackingBeginEvent:(id)arg1;
- (void)eventEnd:(id)arg0 trackingEndEvent:(id)arg1;
- (void)setWaitingKeyArray:(id)arg0;
- (long long)getDurationBetweenWithBeginKey:(id)arg0 andEndKey:(id)arg1;
- (long long)getDurationBetween:(id)arg0 and:(id)arg1;
- (void)setAdditionHandleBlock:(id /* block */)arg0;
- (void)failedTrackWithErrorCode:(long long)arg0 noEventTracking:(BOOL)arg1;
- (void)failedTrackWithErrorCode:(long long)arg0;
- (void)realTrackWithParam:(id)arg0;
- (void)eventEnd:(id)arg0 interval:(double)arg1;
- (void)setLoseStartPointMark:(BOOL)arg0;
- (void)startTrackWithParam:(id)arg0;
- (long long)getDuration:(id)arg0;
- (id)waitingKeyArray;
- (BOOL)checkTrackDataFinished;
- (BOOL)loseStartPointMark;
- (id /* block */)additionHandleBlock;
- (void)setFinished:(BOOL)arg0;
- (void)setPending:(BOOL)arg0;
- (void).cxx_destruct;
- (id)primaryKey;
- (id)initWithName:(id)arg0;
- (void)clear;
- (BOOL)finished;
- (BOOL)pending;
- (void)setPrimaryKey:(id)arg0;
- (id)trackName;
- (void)setTrackName:(id)arg0;

@end
