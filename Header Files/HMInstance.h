//
//     Generated by private class-dump
//

@class HMInstanceConfig;

@interface HMInstance : NSObject {
    struct map<HMRecordPriority, std::shared_ptr<hermas::Recorder>, std::less<HMRecordPriority>, std::allocator<std::pair<const HMRecordPriority, std::shared_ptr<hermas::Recorder>>>> { struct __tree<std::__value_type<HMRecordPriority, std::shared_ptr<hermas::Recorder>>, std::__map_value_compare<HMRecordPriority, std::__value_type<HMRecordPriority, std::shared_ptr<hermas::Recorder>>, std::less<HMRecordPriority>, true>, std::allocator<std::__value_type<HMRecordPriority, std::shared_ptr<hermas::Recorder>>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<HMRecordPriority, std::shared_ptr<hermas::Recorder>>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<HMRecordPriority, std::__value_type<HMRecordPriority, std::shared_ptr<hermas::Recorder>>, std::less<HMRecordPriority>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } _container;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _mutex;
    struct unique_ptr<hermas::Hermas, std::default_delete<hermas::Hermas>> { struct __compressed_pair<hermas::Hermas *, std::default_delete<hermas::Hermas>> { struct Hermas *__value_; } __ptr_; } _hermas;
    HMInstanceConfig *_config;
    id /* block */ _sequenceNumberGenerator;
}

@property (readonly, nonatomic) HMInstanceConfig *config;
@property (copy, nonatomic) id /* block */ sequenceNumberGenerator;

- (void)recordData:(id)arg0 priority:(unsigned long long)arg1;
- (void)recordData:(id)arg0;
- (BOOL)isDropData;
- (void)recordData:(id)arg0 priority:(unsigned long long)arg1 forceSave:(BOOL)arg2;
- (void)aggregateData:(id)arg0;
- (void)updateReportHeader:(id)arg0;
- (void)startSemiTraceRecord:(id)arg0;
- (void)recordLocal:(id)arg0 forceSave:(BOOL)arg1;
- (void)finishSemiTraceRecord:(id)arg0 WithSpanIdList:(id)arg1;
- (void)startSemiSpanRecord:(id)arg0;
- (void)finishSemiSpanRecord:(id)arg0;
- (void)deleteSemifinishedRecords:(id)arg0 WithSpanIdList:(id)arg1;
- (void)UploadLocalData;
- (id /* block */)sequenceNumberGenerator;
- (void)setSequenceNumberGenerator:(id /* block */)arg0;
- (void)stopCache;
- (void)recordCache:(id)arg0;
- (void)stopAggregate:(BOOL)arg0;
- (void)cleanAllCache;
- (void)UploadWithFlushImmediately;
- (void)launchReportForSemi;
- (id)searchWithCondition:(id)arg0;
- (void)buildHermasInstance;
- (struct shared_ptr<hermas::Recorder> { struct Recorder *x0; struct __shared_weak_count *x1; })recorderWithPriority:(unsigned long long)arg0;
- (struct shared_ptr<hermas::ConditionNode> { struct ConditionNode *x0; struct __shared_weak_count *x1; })nodeWithCondition:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (id)initWithConfig:(id)arg0;
- (id).cxx_construct;
- (BOOL)isServerAvailable;

@end
