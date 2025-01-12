//
//     Generated by private class-dump
//

@class NSString, NSMutableArray, NSMutableString;

@interface AWEMVDealWithServerPreprocessResourceModel : NSObject {
    BOOL _needServerExecute;
    BOOL _multiInput;
    long long _index;
    NSMutableArray *_resourceURLArr;
    NSMutableArray *_resourceIDArr;
    NSString *_algorithm;
    NSMutableString *_algorithmType;
    unsigned long long _resultType;
    NSString *_algorithmParamJson;
}

@property (nonatomic) long long index;
@property (retain, nonatomic) NSMutableArray *resourceURLArr;
@property (retain, nonatomic) NSMutableArray *resourceIDArr;
@property (copy, nonatomic) NSString *algorithm;
@property (retain, nonatomic) NSMutableString *algorithmType;
@property (nonatomic) unsigned long long resultType;
@property (retain, nonatomic) NSString *algorithmParamJson;
@property (nonatomic) BOOL needServerExecute;
@property (nonatomic) BOOL multiInput;

- (void)setAlgorithmParamJson:(id)arg0;
- (id)algorithmParamJson;
- (BOOL)needServerExecute;
- (void)setNeedServerExecute:(BOOL)arg0;
- (id)resourceURLArr;
- (void)setResourceURLArr:(id)arg0;
- (id)resourceIDArr;
- (void)setResourceIDArr:(id)arg0;
- (BOOL)multiInput;
- (void)setMultiInput:(BOOL)arg0;
- (id)algorithm;
- (void)setIndex:(long long)arg0;
- (void)setResultType:(unsigned long long)arg0;
- (unsigned long long)resultType;
- (void).cxx_destruct;
- (long long)index;
- (void)setAlgorithm:(id)arg0;
- (id)algorithmType;
- (void)setAlgorithmType:(id)arg0;

@end
