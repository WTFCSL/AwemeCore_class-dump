//
//     Generated by private class-dump
//

@class NSNumber, NSString, NSArray;

@interface ACCQuickFlashTopicResponseModel : MTLModel <MTLJSONSerializing> {
    BOOL _bindHashtag;
    NSNumber *_statusCode;
    NSString *_statusMsg;
    NSArray *_TopicList;
}

@property (nonatomic) BOOL bindHashtag;
@property (retain, nonatomic) NSNumber *statusCode;
@property (retain, nonatomic) NSString *statusMsg;
@property (retain, nonatomic) NSArray *TopicList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)topicListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)statusMsg;
- (void)setStatusMsg:(id)arg0;
- (void)setTopicList:(id)arg0;
- (id)TopicList;
- (BOOL)bindHashtag;
- (void)setBindHashtag:(BOOL)arg0;
- (id)statusCode;
- (void)setStatusCode:(id)arg0;
- (void).cxx_destruct;

@end
