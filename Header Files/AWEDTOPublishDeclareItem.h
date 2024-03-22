//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDTOPublishDeclareItem : MTLModel <MTLJSONSerializing> {
    long long _selectedIndex;
    NSString *_text;
    NSString *_chooseText;
    NSString *_chooseIcon;
}

@property (nonatomic) long long selectedIndex;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *chooseText;
@property (copy, nonatomic) NSString *chooseIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)chooseText;
- (void)setChooseText:(id)arg0;
- (id)chooseIcon;
- (void)setChooseIcon:(id)arg0;
- (void).cxx_destruct;
- (void)setSelectedIndex:(long long)arg0;
- (void)setText:(id)arg0;
- (id)text;
- (long long)selectedIndex;

@end