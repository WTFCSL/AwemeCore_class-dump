//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSMutableDictionary, IESLiveAnchorInteractiveGameModel, NSMutableArray;
@protocol IESLiveTimorService;

@interface IESLiveGameOpenPlatformAudienceEntranceMsgModel : NSObject {
    BOOL _checkEntranceVisitable;
    BOOL _showAudienceFloatEntrance;
    NSString *_extra;
    NSDictionary *_extraDict;
    unsigned long long _status;
    NSString *_appId;
    NSString *_metaVersion;
    NSString *_name;
    NSString *_iconURL;
    long long _gameId;
    NSMutableArray *_versionRangeArray;
    NSString *_schema;
    NSString *_connectId;
    unsigned long long _interactID;
    IESLiveAnchorInteractiveGameModel *_gameModel;
    long long _startId;
    long long _sendType;
    NSString *_logExtra;
    NSString *_imExtra;
    NSMutableDictionary *_startPageQuery;
    id<IESLiveTimorService> _timorService;
}

@property (retain, nonatomic) id<IESLiveTimorService> timorService;
@property (readonly, nonatomic) IESLiveAnchorInteractiveGameModel *gameModel;
@property (readonly, nonatomic) unsigned long long interactID;
@property (readonly, copy, nonatomic) NSString *extra;
@property (readonly, copy, nonatomic) NSDictionary *extraDict;
@property (readonly, nonatomic) unsigned long long status;
@property (readonly, nonatomic) NSMutableArray *versionRangeArray;
@property (readonly, nonatomic) BOOL checkEntranceVisitable;
@property (readonly, copy, nonatomic) NSString *appId;
@property (readonly, copy, nonatomic) NSString *metaVersion;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *iconURL;
@property (readonly, nonatomic) long long startId;
@property (readonly, nonatomic) long long gameId;
@property (readonly, nonatomic) BOOL showAudienceFloatEntrance;
@property (readonly, nonatomic) long long sendType;
@property (readonly, nonatomic) NSString *schema;
@property (readonly, nonatomic) NSString *connectId;
@property (readonly, nonatomic) NSString *logExtra;
@property (readonly, nonatomic) NSString *imExtra;
@property (readonly, nonatomic) NSMutableDictionary *startPageQuery;

- (id)logExtra;
- (id)extraDict;
- (id)startPageQuery;
- (unsigned long long)interactID;
- (long long)gameId;
- (id)imExtra;
- (long long)sendType;
- (id)timorService;
- (void)setTimorService:(id)arg0;
- (id)connectId;
- (id)initWithLiveAudienceEntranceMessage:(id)arg0;
- (BOOL)checkEntranceVisitable;
- (id)initWithAudienceXplayMessage:(id)arg0;
- (id)initWithLiveAudienceEntranceInfo:(id)arg0;
- (void)updateLogExtra:(id)arg0 startPageQuery:(id)arg1;
- (void)p_updateSchemaByLogExtra;
- (id)metaVersion;
- (id)versionRangeArray;
- (BOOL)showAudienceFloatEntrance;
- (void).cxx_destruct;
- (unsigned long long)status;
- (id)iconURL;
- (id)initWithDict:(id)arg0;
- (id)extra;
- (id)appId;
- (id)schema;
- (id)name;
- (long long)startId;
- (id)gameModel;

@end
