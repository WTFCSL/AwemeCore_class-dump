//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPrivateAutoFollowBackTextConfigModel : MTLModel <MTLJSONSerializing> {
    NSString *_title;
    NSString *_content;
    NSString *_leftButtonText;
    NSString *_rightButtonText;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *leftButtonText;
@property (copy, nonatomic) NSString *rightButtonText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)content;
- (id)title;
- (void)setContent:(id)arg0;
- (void)setTitle:(id)arg0;
- (void)setLeftButtonText:(id)arg0;
- (id)leftButtonText;
- (void)setRightButtonText:(id)arg0;
- (id)rightButtonText;

@end