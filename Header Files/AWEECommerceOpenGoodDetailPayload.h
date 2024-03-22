//
//     Generated by private class-dump
//

@class NSString, NSDictionary, AWEAwemeModel;
@protocol AFDRichContentContainerViewControllerProtocol;

@interface AWEECommerceOpenGoodDetailPayload : NSObject {
    AWEAwemeModel *_model;
    NSString *_schemaString;
    NSString *_clickAreaString;
    NSString *_enterFrom;
    NSDictionary *_customEntranceInfo;
    long long _type;
    id<AFDRichContentContainerViewControllerProtocol> _richContentContainer;
}

@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *schemaString;
@property (copy, nonatomic) NSString *clickAreaString;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSDictionary *customEntranceInfo;
@property (nonatomic) long long type;
@property (weak, nonatomic) id<AFDRichContentContainerViewControllerProtocol> richContentContainer;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (id)richContentContainer;
- (void)setRichContentContainer:(id)arg0;
- (id)schemaString;
- (void)setSchemaString:(id)arg0;
- (void)setClickAreaString:(id)arg0;
- (id)clickAreaString;
- (id)customEntranceInfo;
- (void)setCustomEntranceInfo:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (long long)type;
- (void)setType:(long long)arg0;

@end