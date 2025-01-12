//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSMutableArray;

@interface AWENearbyDiamondSessionTrackNode : NSObject {
    AWENearbyDiamondSessionTrackNode *_parentNode;
    NSMutableArray *_childNode;
    NSString *_sessionID;
    NSDictionary *_trackParams;
    NSDictionary *_commonParams;
    NSDictionary *_schemaParams;
    NSDictionary *_extraParams;
}

@property (retain, nonatomic) AWENearbyDiamondSessionTrackNode *parentNode;
@property (retain, nonatomic) NSMutableArray *childNode;
@property (retain, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (copy, nonatomic) NSDictionary *commonParams;
@property (copy, nonatomic) NSDictionary *schemaParams;
@property (copy, nonatomic) NSDictionary *extraParams;

- (id)trackParams;
- (void)setCommonParams:(id)arg0;
- (id)extraParams;
- (void)setExtraParams:(id)arg0;
- (id)commonParams;
- (void)setTrackParams:(id)arg0;
- (void)setSchemaParams:(id)arg0;
- (id)schemaParams;
- (id)mergedCommonParams;
- (id)mergedTrackParams;
- (id)mergedSchemaParams;
- (id)mergedExtraParams;
- (id)childNode;
- (id)initWithSessinID:(id)arg0;
- (id)mergedDict:(id)arg0 highPriDict:(id)arg1;
- (void)setChildNode:(id)arg0;
- (void).cxx_destruct;
- (void)setSessionID:(id)arg0;
- (id)sessionID;
- (id)parentNode;
- (void)setParentNode:(id)arg0;

@end
