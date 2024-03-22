//
//     Generated by private class-dump
//

@class NSString, NSSet, AWEPzComponentModel, AWEPzComponentConfigModel, AWEPzEngine, AWEPzComponentRecordModel;

@interface AWEPzComponent : NSObject <AWEPzComponentProtocol> {
    struct _opaque_pthread_rwlock_t { long long x0; char x1[192]; } *_rwlock;
    BOOL _needRecord;
    BOOL _consumed;
    long long _state;
    AWEPzComponentModel *_model;
    AWEPzComponentConfigModel *_config;
    AWEPzComponentRecordModel *_recordModel;
    double _lastShowTime;
    AWEPzEngine *_engine;
}

@property (readonly, nonatomic) long long state;
@property (readonly, copy, nonatomic) NSString *componentID;
@property (readonly, copy, nonatomic) NSSet *cTags;
@property (readonly, nonatomic) id attachment;
@property (readonly, copy, nonatomic) NSString *componentType;
@property (readonly, copy, nonatomic) NSSet *sTags;
@property (readonly, nonatomic) AWEPzComponentModel *model;
@property (readonly, nonatomic) BOOL needRecord;
@property (readonly, nonatomic) AWEPzComponentConfigModel *config;
@property (readonly, nonatomic) BOOL consumed;
@property (readonly, weak, nonatomic) AWEPzEngine *engine;
@property (readonly, nonatomic) AWEPzComponentRecordModel *recordModel;
@property (readonly, nonatomic) double lastShowTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)recordModel;
- (id)cTags;
- (double)lastShowTime;
- (id)sTags;
- (id)initWithEngine:(id)arg0 config:(id)arg1;
- (void)setupWithModel:(id)arg0 needRecord:(BOOL)arg1;
- (void)updateConsumed:(BOOL)arg0;
- (BOOL)needRecord;
- (void)remove;
- (void)updateState:(long long)arg0;
- (void).cxx_destruct;
- (long long)state;
- (id)model;
- (id)config;
- (void)show;
- (id)engine;
- (void)consume;
- (void)hide;
- (BOOL)consumed;
- (id)componentType;
- (id)description;
- (void)dealloc;
- (void)reset;
- (void)add;
- (id)attachment;
- (id)componentID;

@end