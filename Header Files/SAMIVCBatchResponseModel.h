//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface SAMIVCBatchResponseModel : AWEBaseApiModel {
    NSString *_statusText;
    NSString *_taskID;
    NSString *_nameSpace;
    NSArray *_infoList;
}

@property (retain, nonatomic) NSString *statusText;
@property (retain, nonatomic) NSString *taskID;
@property (retain, nonatomic) NSString *nameSpace;
@property (copy, nonatomic) NSArray *infoList;

+ (id)infoListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)infoList;
- (void)setInfoList:(id)arg0;
- (void).cxx_destruct;
- (void)setNameSpace:(id)arg0;
- (id)statusText;
- (id)taskID;
- (id)nameSpace;
- (void)setTaskID:(id)arg0;
- (void)setStatusText:(id)arg0;

@end
