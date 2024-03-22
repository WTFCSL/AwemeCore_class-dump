//
//     Generated by private class-dump
//

@class NSArray, NSNumber, NSString;

@interface AWEAwemePlayVideoFullTextSectionModel : MTLModel <MTLJSONSerializing> {
    NSArray *_sentences;
    NSNumber *_startTime;
    NSNumber *_endTime;
    NSString *_paragraphTitle;
}

@property (retain, nonatomic) NSArray *sentences;
@property (readonly, nonatomic) NSNumber *startTime;
@property (readonly, nonatomic) NSNumber *endTime;
@property (readonly, nonatomic) NSString *paragraphTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sentencesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)paragraphTitle;
- (void).cxx_destruct;
- (id)endTime;
- (id)startTime;
- (id)sentences;
- (void)setSentences:(id)arg0;

@end
