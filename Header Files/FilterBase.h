//
//     Generated by private class-dump
//

@class NSString;

@interface FilterBase : NSObject {
    BOOL _isUsing;
    BOOL _isFilterEffective;
    int _filterType;
    int _order;
    int _logFlag;
    int _initError;
    int _filterIndex;
    float _filterVideoFps;
    float _filterLimitUpperFps;
    float _filterLimitLowerFps;
    int _inputFmt;
    int _perEffectFrameCount;
    int _perEffectProcessDepth;
    int _perEffectErrorCode;
    FilterBase *_next;
    FilterBase *_previous;
    double _perEffectAccumulatedTime;
    double _perEffectAveragedTime;
    double _perEffectStartTime;
    NSString *_perEffectErrorMsg;
    FilterBase *_holder;
}

@property int filterType;
@property int order;
@property int logFlag;
@property (retain) FilterBase *next;
@property (retain) FilterBase *previous;
@property BOOL isUsing;
@property int initError;
@property int filterIndex;
@property float filterVideoFps;
@property float filterLimitUpperFps;
@property float filterLimitLowerFps;
@property int inputFmt;
@property BOOL isFilterEffective;
@property (readonly, nonatomic) int perEffectFrameCount;
@property (readonly, nonatomic) double perEffectAccumulatedTime;
@property (readonly, nonatomic) double perEffectAveragedTime;
@property (readonly, nonatomic) double perEffectStartTime;
@property (readonly, nonatomic) int perEffectProcessDepth;
@property (readonly, nonatomic) int perEffectErrorCode;
@property (readonly, copy) NSString *perEffectErrorMsg;
@property (weak, nonatomic) FilterBase *holder;

- (id)dictionaryToJson:(id)arg0;
- (float)getFloatValueForKey:(int)arg0;
- (id)holder;
- (void)setLogFlag:(int)arg0;
- (void)setInputFmt:(int)arg0;
- (void)setIsUsing:(BOOL)arg0;
- (BOOL)isUsing;
- (void)effectProcessBegin;
- (void)effectProcessEnd;
- (void)reportFilterError:(int)arg0 errorMsg:(id)arg1 nsError:(id)arg2;
- (void)setInitError:(int)arg0;
- (void)setIsFilterEffective:(BOOL)arg0;
- (id)getBaseEffectPatameter;
- (id)getEffectPatameterStr;
- (void)insertFilter:(id)arg0;
- (void)removeEffect;
- (void)setPerEffectError:(int)arg0 errorMsg:(id)arg1;
- (id)releaseFilter;
- (void)cleanEffectProcessTrackingInfo;
- (BOOL)isPixFmtEqual:(int)arg0 compareTo:(int)arg1;
- (int)logFlag;
- (int)initError;
- (void)setFilterIndex:(int)arg0;
- (float)filterVideoFps;
- (void)setFilterVideoFps:(float)arg0;
- (float)filterLimitUpperFps;
- (void)setFilterLimitUpperFps:(float)arg0;
- (float)filterLimitLowerFps;
- (void)setFilterLimitLowerFps:(float)arg0;
- (int)inputFmt;
- (BOOL)isFilterEffective;
- (int)perEffectFrameCount;
- (double)perEffectAccumulatedTime;
- (double)perEffectAveragedTime;
- (double)perEffectStartTime;
- (int)perEffectProcessDepth;
- (int)perEffectErrorCode;
- (id)perEffectErrorMsg;
- (void)setHolder:(id)arg0;
- (struct VideoFrame { struct VideoFrameBuffer *x0; } *)process:(struct VideoFrame { struct VideoFrameBuffer *x0; } *)arg0;
- (void)setFilterType:(int)arg0;
- (id)next;
- (int)getValueForKey:(int)arg0;
- (int)order;
- (void)setNext:(id)arg0;
- (void)setOrder:(int)arg0;
- (void)setPrevious:(id)arg0;
- (id)previous;
- (void).cxx_destruct;
- (int)filterType;
- (void)setEffect:(id)arg0;
- (id)description;
- (void)setValue:(float)arg0 forKey:(int)arg1;
- (id)initWithFilterType:(int)arg0;
- (int)filterIndex;

@end
