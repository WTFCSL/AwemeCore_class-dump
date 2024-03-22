//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface IESECCommentSurveySubOptionConfig : MTLModel <MTLJSONSerializing> {
    BOOL _showInput;
    NSString *_inputPlaceHolder;
    NSArray *_subOptions;
}

@property (nonatomic) BOOL showInput;
@property (copy, nonatomic) NSString *inputPlaceHolder;
@property (copy, nonatomic) NSArray *subOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)subOptionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)showInput;
- (void)setShowInput:(BOOL)arg0;
- (id)inputPlaceHolder;
- (void)setInputPlaceHolder:(id)arg0;
- (id)subOptions;
- (void)setSubOptions:(id)arg0;
- (void).cxx_destruct;

@end
