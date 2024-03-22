//
//     Generated by private class-dump
//

@class NSString, IESECLiveToggleAuthor, IESECLiveImageURLModel;

@interface IESECLiveToggleElement : MTLModel <MTLJSONSerializing> {
    IESECLiveImageURLModel *_icon;
    NSString *_text;
    IESECLiveToggleAuthor *_author;
}

@property (retain, nonatomic) IESECLiveImageURLModel *icon;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) IESECLiveToggleAuthor *author;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)icon;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (id)author;
- (void)setAuthor:(id)arg0;
- (void)setIcon:(id)arg0;
- (id)text;

@end