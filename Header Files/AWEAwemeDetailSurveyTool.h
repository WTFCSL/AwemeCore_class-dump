//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface AWEAwemeDetailSurveyTool : NSObject <AWEAwemeDetailSurveyToolProtocol> {
    NSMutableDictionary *_surveyRecordDict;
}

@property (retain, nonatomic) NSMutableDictionary *surveyRecordDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isValidFeelGoodInDetail:(id)arg0;
+ (BOOL)isInSurveyWhiteList:(id)arg0;
+ (BOOL)enableSurveyInAwemeDetail;
+ (id)sharedInstance;

- (BOOL)hasRecordSurveyForModel:(id)arg0;
- (void)addSurveyRecord:(id)arg0;
- (id)surveyRecordDict;
- (void)setSurveyRecordDict:(id)arg0;
- (void).cxx_destruct;

@end
