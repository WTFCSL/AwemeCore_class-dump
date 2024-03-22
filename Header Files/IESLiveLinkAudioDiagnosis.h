//
//     Generated by private class-dump
//

@class NSDictionary, IESLiveLinkAudioDiagnosisConfig;

@interface IESLiveLinkAudioDiagnosis : NSObject {
    void *_diagnosis;
    int _sampleRate;
    BOOL _enableScoreReport;
    BOOL _enableCutoffFrequencyReport;
    BOOL _enableLoudnessReport;
    BOOL _enableRmsStatsReport;
    NSDictionary *_reportDic;
    IESLiveLinkAudioDiagnosisConfig *_config;
}

@property (copy, nonatomic) NSDictionary *reportDic;
@property (nonatomic) BOOL enableScoreReport;
@property (nonatomic) BOOL enableCutoffFrequencyReport;
@property (nonatomic) BOOL enableLoudnessReport;
@property (nonatomic) BOOL enableRmsStatsReport;
@property (retain, nonatomic) IESLiveLinkAudioDiagnosisConfig *config;

- (void)processAudioFrame:(id)arg0;
- (void)saveResult:(id)arg0;
- (id)reportDic;
- (void)setReportDic:(id)arg0;
- (void)setEnableScoreReport:(BOOL)arg0;
- (void)setEnableCutoffFrequencyReport:(BOOL)arg0;
- (void)setEnableLoudnessReport:(BOOL)arg0;
- (void)setEnableRmsStatsReport:(BOOL)arg0;
- (struct pair<std::string, std::unordered_map<std::string, int>> { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x0; struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x0; struct unordered_map<std::string, int, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, int>>> { struct __hash_table<std::__hash_value_type<std::string, int>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, int>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, int>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, int>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> *>>> { void **x0; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> *>> { unsigned long long x0; } x0; } x1; } x0; } x0; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, int>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> { void *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, int>, std::hash<std::string>, std::equal_to<std::string>>> { unsigned long long x0; } x2; struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, int>, std::equal_to<std::string>, std::hash<std::string>>> { float x0; } x3; } x0; } x1; })convertDictionaryToPair:(id)arg0;
- (struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x0; struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; })convertDictionaryToChar:(id)arg0;
- (struct unordered_map<std::string, int, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, int>>> { struct __hash_table<std::__hash_value_type<std::string, int>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, int>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, int>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, int>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> *>>> { void **x0; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> *>> { unsigned long long x0; } x0; } x1; } x0; } x0; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, int>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> { void *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, int>, std::hash<std::string>, std::equal_to<std::string>>> { unsigned long long x0; } x2; struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, int>, std::equal_to<std::string>, std::hash<std::string>>> { float x0; } x3; } x0; })convertDictionaryToMap:(id)arg0;
- (BOOL)enableScoreReport;
- (BOOL)enableCutoffFrequencyReport;
- (BOOL)enableLoudnessReport;
- (BOOL)enableRmsStatsReport;
- (id)initWithSampleRate:(int)arg0 channels:(int)arg1 maxBlockSize:(int)arg2 config:(id)arg3;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (void)dealloc;
- (id)getResult;

@end