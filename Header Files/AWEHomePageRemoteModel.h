//
//     Generated by private class-dump
//

@class NSString, AWEHomePageRemoteCommonImageModel, NSArray;

@interface AWEHomePageRemoteModel : MTLModel <MTLJSONSerializing> {
    long long _panelTopType;
    AWEHomePageRemoteCommonImageModel *_panelIconModel;
    NSString *_title;
    NSArray *_modules;
}

@property (nonatomic) long long panelTopType;
@property (retain, nonatomic) AWEHomePageRemoteCommonImageModel *panelIconModel;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *modules;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modulesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)panelIconModel;
- (long long)panelTopType;
- (void)setPanelTopType:(long long)arg0;
- (void)setPanelIconModel:(id)arg0;
- (id)modules;
- (void).cxx_destruct;
- (void)setModules:(id)arg0;
- (id)title;
- (id)description;
- (void)setTitle:(id)arg0;

@end
