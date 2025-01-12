//
//     Generated by private class-dump
//

@class NSString, NSNumber, AWEURLModel;

@interface AWEAdConversionAreaModel : MTLModel <MTLJSONSerializing> {
    long long _styleType;
    NSString *_text;
    NSString *_backgroundColor;
    NSString *_appleID;
    NSString *_source;
    NSString *_title;
    AWEURLModel *_icon;
    NSNumber *_showTextLink;
}

@property (nonatomic) long long styleType;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSString *appleID;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) AWEURLModel *icon;
@property (retain, nonatomic) NSNumber *showTextLink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setStyleType:(long long)arg0;
- (BOOL)enableLink;
- (id)showTextLink;
- (void)setShowTextLink:(id)arg0;
- (id)appleID;
- (id)icon;
- (long long)styleType;
- (id)source;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (id)title;
- (void)setAppleID:(id)arg0;
- (void)setIcon:(id)arg0;
- (id)text;
- (id)backgroundColor;
- (void)setSource:(id)arg0;
- (void)setBackgroundColor:(id)arg0;
- (void)setTitle:(id)arg0;

@end
