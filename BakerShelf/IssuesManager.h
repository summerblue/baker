

/*
 |--------------------------------------------------------------------------
 | 书架管理器, 用来管理 Issue 的, IssuesManager 管理 Issue, 注意单复数的关系.
 | 每一个 Issue 是一期杂志杂志 .
 |--------------------------------------------------------------------------
 |
 */

#import <Foundation/Foundation.h>
#import <NewsstandKit/NewsstandKit.h>
#import "BakerIssue.h"

@interface IssuesManager : NSObject

@property (copy, nonatomic) NSArray *issues;
@property (retain, nonatomic) NSString *shelfManifestPath;

#pragma mark - Singleton

+ (IssuesManager *)sharedInstance;

#ifdef BAKER_NEWSSTAND
-(void)refresh:(void (^)(BOOL)) callback;
-(NSSet *)productIDs;
-(BOOL)hasProductIDs;
-(BakerIssue *)latestIssue;
#endif
+ (NSArray *)localBooksList;

@end
