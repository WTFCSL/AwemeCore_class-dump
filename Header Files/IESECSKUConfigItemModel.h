//
//     Generated by private class-dump
//

@class IESECSKUViewConfigModel, IESECURLModel, IESECSKUBlankConfigModel, IESECSKUTextConfigModel, NSDictionary, NSString;

@interface IESECSKUConfigItemModel : MTLModel <MTLJSONSerializing> {
    IESECSKUViewConfigModel *_viewObj;
    IESECSKUBlankConfigModel *_blankObj;
    IESECURLModel *_imageObj;
    IESECSKUTextConfigModel *_textObj;
    NSDictionary *_showEventParams;
}

@property (retain, nonatomic) IESECSKUViewConfigModel *viewObj;
@property (retain, nonatomic) IESECSKUBlankConfigModel *blankObj;
@property (retain, nonatomic) IESECURLModel *imageObj;
@property (retain, nonatomic) IESECSKUTextConfigModel *textObj;
@property (retain, nonatomic) NSDictionary *showEventParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)showEventParams;
- (void)setShowEventParams:(id)arg0;
- (id)viewObj;
- (void)setViewObj:(id)arg0;
- (id)blankObj;
- (void)setBlankObj:(id)arg0;
- (id)textObj;
- (void)setTextObj:(id)arg0;
- (void).cxx_destruct;
- (id)imageObj;
- (void)setImageObj:(id)arg0;

@end
