//
//     Generated by private class-dump
//

@class NSString;

@interface AWEKnowledgeSwiftBasic.FullPageBaseItemViewModel : NSObject <AWEKnowledgeSwiftBasic.FullPageBaseItemViewModelProtocol> {
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ sectionContext;
    void /* unknown type, empty encoding */ sectionConfig;
    void /* unknown type, empty encoding */ identifier;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ model;
@property (nonatomic, retain) void /* unknown type, empty encoding */ sectionContext;
@property (nonatomic, copy) id sectionConfig;
@property (nonatomic, readonly) double itemHeight;
@property (nonatomic, copy) NSString *identifier;

- (void)configWithSectionContext:(id)arg0 model:(id)arg1;
- (id)sectionConfig;
- (void)setSectionConfig:(id)arg0;
- (void)setModel:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)model;
- (id)identifier;
- (void)setIdentifier:(id)arg0;
- (double)itemHeight;
- (id)sectionContext;
- (void)setSectionContext:(id)arg0;

@end
