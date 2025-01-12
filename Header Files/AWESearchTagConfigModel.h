//
//     Generated by private class-dump
//

@class AWESearchTagText, NSString, AWESearchTagIcon;

@interface AWESearchTagConfigModel : MTLModel <MTLJSONSerializing> {
    unsigned long long _tagType;
    AWESearchTagIcon *_tagIcon;
    AWESearchTagText *_tagText;
    double _hybridHeight;
}

@property (nonatomic) unsigned long long tagType;
@property (retain, nonatomic) AWESearchTagIcon *tagIcon;
@property (retain, nonatomic) AWESearchTagText *tagText;
@property (nonatomic) double hybridHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setTagText:(id)arg0;
- (id)tagText;
- (id)tagIcon;
- (void)setTagIcon:(id)arg0;
- (double)hybridHeight;
- (void)setHybridHeight:(double)arg0;
- (unsigned long long)tagType;
- (void).cxx_destruct;
- (void)setTagType:(unsigned long long)arg0;

@end
