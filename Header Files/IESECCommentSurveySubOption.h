//
//     Generated by private class-dump
//

@class NSString;

@interface IESECCommentSurveySubOption : MTLModel <MTLJSONSerializing> {
    NSString *_subOptionCode;
    NSString *_subOptionDesc;
}

@property (copy, nonatomic) NSString *subOptionCode;
@property (copy, nonatomic) NSString *subOptionDesc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)subOptionCode;
- (void)setSubOptionCode:(id)arg0;
- (id)subOptionDesc;
- (void)setSubOptionDesc:(id)arg0;
- (void).cxx_destruct;

@end